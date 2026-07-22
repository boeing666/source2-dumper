#pragma once

class CInfoSpawnGroupLoadUnload : public CLogicalEntity /*0x0*/  // sizeof 0x580, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_OnSpawnGroupLoadStarted; // offset 0x4A8, size 0x18, align 255
    CEntityIOOutput m_OnSpawnGroupLoadFinished; // offset 0x4C0, size 0x18, align 255
    CEntityIOOutput m_OnSpawnGroupUnloadStarted; // offset 0x4D8, size 0x18, align 255
    CEntityIOOutput m_OnSpawnGroupUnloadFinished; // offset 0x4F0, size 0x18, align 255
    CUtlSymbolLarge m_iszSpawnGroupName; // offset 0x508, size 0x8, align 8
    CUtlSymbolLarge m_iszSpawnGroupFilterName; // offset 0x510, size 0x8, align 8
    CUtlSymbolLarge m_iszLandmarkName; // offset 0x518, size 0x8, align 8
    CUtlString m_sFixedSpawnGroupName; // offset 0x520, size 0x8, align 8
    float32 m_flTimeoutInterval; // offset 0x528, size 0x4, align 4
    bool m_bAutoActivate; // offset 0x52C, size 0x1, align 1
    bool m_bUnloadingStarted; // offset 0x52D, size 0x1, align 1 | MNotSaved
    bool m_bQueueActiveSpawnGroupChange; // offset 0x52E, size 0x1, align 1 | MNotSaved
    bool m_bQueueFinishLoading; // offset 0x52F, size 0x1, align 1 | MNotSaved
    char _pad_0530[0x50]; // offset 0x530
};
