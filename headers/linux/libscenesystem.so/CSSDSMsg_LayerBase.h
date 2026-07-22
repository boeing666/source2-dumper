#pragma once

class CSSDSMsg_LayerBase  // sizeof 0x30, align 0x8 (scenesystem) {MGetKV3ClassDefaults}
{
public:
    SceneViewId_t m_viewId; // offset 0x0, size 0x10, align 8
    CUtlString m_ViewName; // offset 0x10, size 0x8, align 8
    uint64 m_nLayerId; // offset 0x18, size 0x8, align 8
    CUtlString m_LayerName; // offset 0x20, size 0x8, align 8
    CUtlString m_displayText; // offset 0x28, size 0x8, align 8
};
