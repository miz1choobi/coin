/************************************************************************** *
 *  This file is part of the Coin 3D visualization library.
 *  Copyright (C) 1998-2004 by Systems in Motion.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  ("GPL") version 2 as published by the Free Software Foundation.
 *  See the file LICENSE.GPL at the root directory of this source
 *  distribution for additional information about the GNU GPL.
 *
 *  For using Coin with software that can not be combined with the GNU
 *  GPL, and for taking advantage of the additional benefits of our
 *  support services, please contact Systems in Motion about acquiring
 *  a Coin Professional Edition License.
 *
 *  See <URL:http://www.coin3d.org/> for more information.
 *
 *  Systems in Motion, Teknobyen, Abels Gate 5, 7030 Trondheim, NORWAY.
 *  <URL:http://www.sim.no/>.
 *
\**************************************************************************/

#ifndef SO_DIRECTIONALLIGHTDRAGGER_IV_H
#define SO_DIRECTIONALLIGHTDRAGGER_IV_H

static const char DIRECTIONALLIGHTDRAGGER_draggergeometry[] =
  "#Inventor V2.1 ascii\n"
  "\n"
  "\n"
  "DEF DIRECTIONALLIGHT_INACTIVE_MATERIAL Material { diffuseColor 0.5 0.5 0.5  emissiveColor 0.5 0.5 0.5 }\n"
  "DEF DIRECTIONALLIGHT_ACTIVE_MATERIAL Material { diffuseColor 0.5 0.5 0  emissiveColor 0.5 0.5 0 }\n"
  "\n"
  "\n"
  "\n"
  "\n"
  "DEF directionalLightOverallMaterial Material { diffuseColor 0.5 0.5 0.5  emissiveColor 0.5 0.5 0.5 }\n"
  "\n"
  "DEF DIRECTIONALLIGHT_ARROW Separator {\n"
  "\n"
  "   Rotation { rotation 1 0 0  -1.57 }\n"
  "\n"
  "   Coordinate3 { point [ 0 0 0, 0 9 0 ] }\n"
  "   IndexedLineSet { coordIndex [ 0, 1, -1 ] }\n"
  "   Translation { translation 0 10 0 }\n"
  "   Cone { }\n"
  "   Translation { translation 0 -11 0 }\n"
  "   Cone { bottomRadius 0.1 }\n"
  "}\n"
  "\n"
  "DEF directionalLightRotatorRotator Separator {\n"
  "   USE DIRECTIONALLIGHT_INACTIVE_MATERIAL\n"
  "   USE DIRECTIONALLIGHT_ARROW\n"
  "}\n"
  "DEF directionalLightRotatorRotatorActive Separator {\n"
  "   USE DIRECTIONALLIGHT_ACTIVE_MATERIAL\n"
  "   USE DIRECTIONALLIGHT_ARROW\n"
  "}\n"
  "\n"
  "DEF directionalLightRotatorFeedback Separator { }\n"
  "DEF directionalLightRotatorFeedbackActive Separator { }\n"
  "\n"
  "\n"
  "DEF directionalLightTranslatorPlaneTranslator Separator {\n"
  "   USE DIRECTIONALLIGHT_INACTIVE_MATERIAL\n"
  "   Sphere { }\n"
  "}\n"
  "DEF directionalLightTranslatorPlaneTranslatorActive Separator {\n"
  "   USE DIRECTIONALLIGHT_ACTIVE_MATERIAL\n"
  "   Sphere { }\n"
  "}\n"
  "\n"
  "DEF DIRECTIONALLIGHT_TRANSLATE_AXIS Group {\n"
  "   Rotation { rotation 0 0 1  1.57 }\n"
  "   Cylinder { height 3  radius 0.2 }\n"
  "}\n"
  "\n"
  "DEF directionalLightTranslatorLineTranslator Separator {\n"
  "   USE DIRECTIONALLIGHT_INACTIVE_MATERIAL\n"
  "   USE DIRECTIONALLIGHT_TRANSLATE_AXIS\n"
  "}\n"
  "DEF directionalLightTranslatorLineTranslatorActive Separator {\n"
  "   USE DIRECTIONALLIGHT_ACTIVE_MATERIAL\n"
  "   USE DIRECTIONALLIGHT_TRANSLATE_AXIS\n"
  "}\n";

#endif /* ! SO_DIRECTIONALLIGHTDRAGGER_IV_H */