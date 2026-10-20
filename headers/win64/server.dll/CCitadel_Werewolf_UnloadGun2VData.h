#pragma once

class CCitadel_Werewolf_UnloadGun2VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1298, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strShootSound; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GunReloadParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MuzzleFlashParticle; // offset 0x1170, size 0xE0, align 8
    bool m_bGrantAmmoOnCast; // offset 0x1250, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1251[0x7]; // offset 0x1251
    CPiecewiseCurve m_InaccuracyCurveScaleDuringPrecast; // offset 0x1258, size 0x40, align 8
};
