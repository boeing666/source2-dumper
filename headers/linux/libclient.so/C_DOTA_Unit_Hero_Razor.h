#pragma once

class C_DOTA_Unit_Hero_Razor : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F04]; // offset 0x0
    int32 m_iPoseParameterAim; // offset 0x1F04, size 0x4, align 4
    int32 m_iPoseParameterRange; // offset 0x1F08, size 0x4, align 4
    int32 m_nTargetAngle; // offset 0x1F0C, size 0x4, align 4
    int32 m_nTargetRange; // offset 0x1F10, size 0x4, align 4
    char _pad_1F14[0x4]; // offset 0x1F14
};
