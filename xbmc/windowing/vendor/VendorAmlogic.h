/*
 *      Copyright (C) 2012 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#if defined(TARGET_AMLOGIC)
#ifndef WINDOW_VENDOR_AMLOGIC_H
#define WINDOW_VENDOR_AMLOGIC_H

#include <vector>
#include <EGL/egl.h>
#include "utils/StringUtils.h"

class CVendorAmlogic
{
public:
  CVendorAmlogic();
  ~CVendorAmlogic();

  void* CreateNativeWindow(int width, int height, int bpp);
  void DestroyNativeWindow(EGLNativeWindowType native_window);
  int  GetDisplayResolutionMode();
  bool SetDisplayResolution(const char* resolution);
  bool Has720pRenderLimits();
  bool ProbeDisplayResolutions(std::vector<CStdString> &resolutions);
  void ShowWindow(bool show);
  int  SetFreeScale(int mode);
  int  EnableFreeScale(int mode);
  int  DisableFreeScale(int mode);

};

#endif
#endif
