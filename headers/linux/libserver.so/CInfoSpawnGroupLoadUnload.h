#pragma once

class CInfoSpawnGroupLoadUnload : public CLogicalEntity /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_OnSpawnGroupLoadStarted; // offset 0x778, size 0x18, align 255
    CEntityIOOutput m_OnSpawnGroupLoadFinished; // offset 0x790, size 0x18, align 255
    CEntityIOOutput m_OnSpawnGroupUnloadStarted; // offset 0x7A8, size 0x18, align 255
    CEntityIOOutput m_OnSpawnGroupUnloadFinished; // offset 0x7C0, size 0x18, align 255
    CUtlSymbolLarge m_iszSpawnGroupName; // offset 0x7D8, size 0x8, align 8
    CUtlSymbolLarge m_iszSpawnGroupFilterName; // offset 0x7E0, size 0x8, align 8
    CUtlSymbolLarge m_iszLandmarkName; // offset 0x7E8, size 0x8, align 8
    CUtlString m_sFixedSpawnGroupName; // offset 0x7F0, size 0x8, align 8
    float32 m_flTimeoutInterval; // offset 0x7F8, size 0x4, align 4
    bool m_bAutoActivate; // offset 0x7FC, size 0x1, align 1
    bool m_bUnloadingStarted; // offset 0x7FD, size 0x1, align 1 | MNotSaved
    bool m_bQueueActiveSpawnGroupChange; // offset 0x7FE, size 0x1, align 1 | MNotSaved
    bool m_bQueueFinishLoading; // offset 0x7FF, size 0x1, align 1 | MNotSaved
    char _pad_0800[0x50]; // offset 0x800
};
