#pragma once

class CPathAccompany : public CBaseEntity /*0x0*/  // sizeof 0x560, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    float32 m_flPathLength; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CUtlVector< PathAccompanyNode_t > m_vecNodes; // offset 0x4B8, size 0x18, align 8
    GameTime_t m_flLastPathRecalc; // offset 0x4D0, size 0x4, align 255
    char _pad_04D4[0xC]; // offset 0x4D4
    CTransform m_xLastParentTransform; // offset 0x4E0, size 0x20, align 16
    bool m_bAllowAutoLead; // offset 0x500, size 0x1, align 1
    char _pad_0501[0x7]; // offset 0x501
    CEntityIOOutput m_OnNpcStartedPath; // offset 0x508, size 0x18, align 255
    CEntityIOOutput m_OnNpcCompletedPath; // offset 0x520, size 0x18, align 255
    CEntityIOOutput m_OnNpcBreakFromPath; // offset 0x538, size 0x18, align 255
    GameTime_t m_nLastDebugDraw; // offset 0x550, size 0x4, align 255
    char _pad_0554[0xC]; // offset 0x554
};
