#pragma once

class CDOTA_Modifier_Mutation_KillstreakPower : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_iDamageDonePct; // offset 0x1A58, size 0x4, align 4
    int32 m_iDamageTakenPct; // offset 0x1A5C, size 0x4, align 4
    int32 m_iModelScale; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
};
