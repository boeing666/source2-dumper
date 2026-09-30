#pragma once

class CCitadel_Werewolf_UnloadGunVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1588, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ShootingModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strShootSound; // offset 0x13B0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GunReloadParticle; // offset 0x13C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MuzzleFlashParticle; // offset 0x14A0, size 0xE0, align 8
    bool m_bGrantAmmoOnCast; // offset 0x1580, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1581[0x7]; // offset 0x1581
};
