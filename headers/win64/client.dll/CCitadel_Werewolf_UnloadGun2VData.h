#pragma once

class CCitadel_Werewolf_UnloadGun2VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1610, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strShootSound; // offset 0x13F8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GunReloadParticle; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MuzzleFlashParticle; // offset 0x14E8, size 0xE0, align 8
    bool m_bGrantAmmoOnCast; // offset 0x15C8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_15C9[0x7]; // offset 0x15C9
    CPiecewiseCurve m_InaccuracyCurveScaleDuringPrecast; // offset 0x15D0, size 0x40, align 8
};
