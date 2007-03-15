#ifndef COIN_SOSHADOWGROUP_H
#define COIN_SOSHADOWGROUP_H

/**************************************************************************\
 *
 *  This file is part of the Coin 3D visualization library.
 *  Copyright (C) 1998-2005 by Systems in Motion.  All rights reserved.
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
 *  Systems in Motion, Postboks 1283, Pirsenteret, 7462 Trondheim, NORWAY.
 *  <URL:http://www.sim.no/>.
 *
\**************************************************************************/

#include <Inventor/nodes/SoSubNode.h>
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/fields/SoSFBool.h>
#include <Inventor/fields/SoSFFloat.h>
#include <Inventor/fields/SoSFEnum.h>

class SoShadowGroupP;

class COIN_DLL_API SoShadowGroup : public SoSeparator {
  typedef SoSeparator inherited;
  
  SO_NODE_HEADER(SoShadowGroup);

public:
  static void initClass(void);
  static void init(void);

  SoShadowGroup(void);

  SoSFBool isActive;
  SoSFFloat intensity;
  SoSFFloat precision;
  SoSFFloat quality;
  SoSFBool shadowCachingEnabled;
  SoSFFloat visibilityRadius;
  SoSFEnum visibilityFlag;

  virtual void GLRenderBelowPath(SoGLRenderAction * action);
  virtual void GLRenderInPath(SoGLRenderAction * action);

  virtual void notify(SoNotList * nl);

protected:
  virtual ~SoShadowGroup();

private:
  SoShadowGroupP * pimpl;

};

#endif // COIN_SOSHADOWGROUP_H