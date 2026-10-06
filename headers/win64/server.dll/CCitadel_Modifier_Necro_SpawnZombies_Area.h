#pragma once

class CCitadel_Modifier_Necro_SpawnZombies_Area : public CCitadelModifier /*0x0*/  // sizeof 0x230, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x168]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecSpawnedZombies; // offset 0x168, size 0x18, align 8
    char _pad_0180[0xB0]; // offset 0x180
};
