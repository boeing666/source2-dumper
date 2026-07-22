#pragma once

class CSurvivorsPowerUp_MortimerKisses : public CSurvivorsPowerUp_AreaAttack_Circle /*0x0*/  // sizeof 0x928, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x800]; // offset 0x0
    CUtlVector< float32 > m_vecQueuedAttackTimers; // offset 0x800, size 0x18, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sArtilleryParticle; // offset 0x818, size 0xE0, align 8
    float32 m_flMinRange; // offset 0x8F8, size 0x4, align 4
    float32 m_flLaunchDistance; // offset 0x8FC, size 0x4, align 4
    float32 m_flScepterLaunchDistance; // offset 0x900, size 0x4, align 4
    float32 m_flAnglePerShot; // offset 0x904, size 0x4, align 4
    SurvivorsParticleID_t m_unArtilleryParticleID; // offset 0x908, size 0x4, align 255
    char _pad_090C[0x1C]; // offset 0x90C
};
