#pragma once

class CPathAccompany : public CBaseEntity /*0x0*/  // sizeof 0x560, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    float32 m_flPathLength; // offset 0x4A0, size 0x4, align 4
    char _pad_04A4[0x4]; // offset 0x4A4
    CUtlVector< PathAccompanyNode_t > m_vecNodes; // offset 0x4A8, size 0x18, align 8
    GameTime_t m_flLastPathRecalc; // offset 0x4C0, size 0x4, align 255
    char _pad_04C4[0xC]; // offset 0x4C4
    CTransform m_xLastParentTransform; // offset 0x4D0, size 0x20, align 16
    PathAccompanyProperties_t m_properties; // offset 0x4F0, size 0x1C, align 255
    char _pad_050C[0x4]; // offset 0x50C
    CEntityIOOutput m_OnNpcStartedPath; // offset 0x510, size 0x18, align 255
    CEntityIOOutput m_OnNpcCompletedPath; // offset 0x528, size 0x18, align 255
    CEntityIOOutput m_OnNpcBreakFromPath; // offset 0x540, size 0x18, align 255
    char _pad_0558[0x8]; // offset 0x558
};
