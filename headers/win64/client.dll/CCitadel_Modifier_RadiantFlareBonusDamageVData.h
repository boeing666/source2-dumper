#pragma once

class CCitadel_Modifier_RadiantFlareBonusDamageVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CSoundEventName m_strOnBulletHitDamageSound; // offset 0x760, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageFX; // offset 0x770, size 0xE0, align 8 | MPropertyStartGroup
};
