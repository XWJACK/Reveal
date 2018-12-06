//
//  Copyright © 2015 Itty Bitty Apps Pty Ltd. All rights reserved.
//

#pragma transparent
#pragma body

// Texture coordinates carry line fraction and dash phase from the vertex shader.
// IMPORTANT: always reference the texture coordinates in the fragment shader (even just in a comment) to force SceneKit to include them in vertex data (otherwise it may optimize them out).
// IMPORTANT: do NOT reference .diffuseTexcoord - this would signal SceneKit (10.12) to treat diffuse property as a texture instead of a solid color. Using ambient instead, as it's not used anyway.
//float lineFraction = _surface.ambientTexcoord.x;
float lineDashPhase = _surface.ambientTexcoord.y;

/** Line dashing **/

// Calculate the phase within a single dash interval from 0 to 1. Fragment in the center of the line has dash phase of zero, so bias of -0.25 makes dashing symmetrical. It also ensures that undashed lines are actually rendered since all their fragments have dash phase of zero.
float normalizedDashPhase = fract(lineDashPhase - 0.25);
// Make fragments with biased dash phase within interval [0;0.5) transparent.
_surface.diffuse *= step(0.5, normalizedDashPhase);
