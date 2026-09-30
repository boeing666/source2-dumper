#pragma once

class CCitadel_Modifier_Necro_SpawnZombies_Area : public CCitadelModifier /*0x0*/  // sizeof 0x218, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecSpawnedZombies; // offset 0x150, size 0x18, align 8
    char _pad_0168[0xB0]; // offset 0x168
};
