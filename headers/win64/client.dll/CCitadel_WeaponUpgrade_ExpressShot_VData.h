#pragma once

class CCitadel_WeaponUpgrade_ExpressShot_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1378, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReadyParticle; // offset 0x1190, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // offset 0x1270, size 0xE0, align 8
    float32 flShotDelay; // offset 0x1350, size 0x4, align 4 | MPropertyGroupName
    char _pad_1354[0x4]; // offset 0x1354
    CSoundEventName m_strOffCooldownSound; // offset 0x1358, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ProcNotificationModifier; // offset 0x1368, size 0x10, align 8 | MPropertyGroupName
};
