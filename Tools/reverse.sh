app_name="Reveal"
des_macho_path="${SRCROOT}/Resources/${app_name}.app/Contents/MacOS"
des_framewotk_path="${SRCROOT}/Resources/${app_name}.app/Contents/Frameworks"
CODE_SIGN_IDENTITY=""

tweak_framework="${TARGET_NAME}.framework"
substitute_dylib="libsubstitute.dylib"

# Source
ori_tweak_framework="${BUILT_PRODUCTS_DIR}/${tweak_framework}"
ori_substitute_dylib="${SRCROOT}/${PROJECT_NAME}/Core/${substitute_dylib}"
ori_macho="${SRCROOT}/Resources/${app_name}_ori"

# Desc
des_tweak_framework="${des_framewotk_path}/${tweak_framework}"
des_substitute_dylib="${des_macho_path}/${substitute_dylib}"
des_macho="${des_macho_path}/${app_name}"


if [ ! -f "${ori_macho}" ]; then
    cp "${des_macho}" "${ori_macho}"
fi

rm -rf "$des_tweak_framework"
rm -rf "$des_substitute_dylib"
rm -rf "$des_macho"

# Copy libsubstitute
cp "${ori_substitute_dylib}" "${des_substitute_dylib}"

# Copy Tweak
cp -R -H "$ori_tweak_framework" "$des_tweak_framework"


#Insert dylib/framework
${SRCROOT}/Tools/insert_dylib --all-yes "@rpath/${tweak_framework}/Versions/A/${PRODUCT_NAME}" "${ori_macho}" "${des_macho}"


if [ ${CODE_SIGN_IDENTITY} != "" ]; then
    # Sign
    /usr/bin/codesign --verbose=4 -f -s "$CODE_SIGN_IDENTITY" "$des_substitute_dylib"
    /usr/bin/codesign --verbose=4 -f -s "$CODE_SIGN_IDENTITY" "$des_tweak_framework"
    # Sign app
    /usr/bin/codesign --verbose=4 -f -s "$CODE_SIGN_IDENTITY" "${SRCROOT}/Resources/${app_name}.app"
fi
