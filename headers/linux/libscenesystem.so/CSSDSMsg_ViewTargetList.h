#pragma once

class CSSDSMsg_ViewTargetList  // sizeof 0x30, align 0x8 (scenesystem) {MGetKV3ClassDefaults}
{
public:
    SceneViewId_t m_viewId; // offset 0x0, size 0x10, align 8
    CUtlString m_ViewName; // offset 0x10, size 0x8, align 8
    CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // offset 0x18, size 0x18, align 8
};
