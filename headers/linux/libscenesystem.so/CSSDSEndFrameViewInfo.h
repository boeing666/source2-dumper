#pragma once

class CSSDSEndFrameViewInfo  // sizeof 0x10, align 0x8 (scenesystem) {MGetKV3ClassDefaults}
{
public:
    uint64 m_nViewId; // offset 0x0, size 0x8, align 8
    CUtlString m_ViewName; // offset 0x8, size 0x8, align 8
};
