#pragma once

class CSurvivorsPowerUpDefinition_MortimerKisses : public CSurvivorsPowerUpDefinition_AreaAttack_Circle /*0x0*/  // sizeof 0x958, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x868]; // offset 0x0
    float32 m_flMinRange; // offset 0x868, size 0x4, align 4
    float32 m_flLaunchDistance; // offset 0x86C, size 0x4, align 4
    float32 m_flScepterLaunchDistance; // offset 0x870, size 0x4, align 4
    float32 m_flAnglePerShot; // offset 0x874, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sArtilleryParticle; // offset 0x878, size 0xE0, align 8
};
