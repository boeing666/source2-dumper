#pragma once

class CSurvivorsSpawnerTower : public CSurvivorsSpawner /*0x0*/  // sizeof 0x190, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x178]; // offset 0x0
    CUtlVector< SurvivorsUnitID_t > m_vecSpawnedTowers; // offset 0x178, size 0x18, align 8
};
