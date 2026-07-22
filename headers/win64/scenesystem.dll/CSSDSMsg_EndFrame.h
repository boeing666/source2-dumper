#pragma once

class CSSDSMsg_EndFrame  // sizeof 0x18, align 0x8 (scenesystem) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CSSDSEndFrameViewInfo > m_Views; // offset 0x0, size 0x18, align 8
};
