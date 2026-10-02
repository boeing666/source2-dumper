#pragma once

class CCitadel_WeaponUpgrade_ExpressShot_VData : public CitadelItemVData /*0x0*/  // sizeof 0x16E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReadyParticle; // offset 0x14F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // offset 0x15D8, size 0xE0, align 8
    float32 flShotDelay; // offset 0x16B8, size 0x4, align 4 | MPropertyGroupName
    char _pad_16BC[0x4]; // offset 0x16BC
    CSoundEventName m_strOffCooldownSound; // offset 0x16C0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ProcNotificationModifier; // offset 0x16D0, size 0x10, align 8 | MPropertyGroupName
};
