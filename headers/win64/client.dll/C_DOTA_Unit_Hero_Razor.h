#pragma once

class C_DOTA_Unit_Hero_Razor : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1E98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1E88]; // offset 0x0
    int32 m_iPoseParameterAim; // offset 0x1E88, size 0x4, align 4
    int32 m_iPoseParameterRange; // offset 0x1E8C, size 0x4, align 4
    int32 m_nTargetAngle; // offset 0x1E90, size 0x4, align 4
    int32 m_nTargetRange; // offset 0x1E94, size 0x4, align 4
};
