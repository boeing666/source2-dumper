#pragma once

class CModifierTier3BossLaserBeamVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xD30, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifierAura > m_GroundAuraModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAuraDropTickRate; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberLaserBeamEffect; // offset 0x7B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberLaserPreviewEffect; // offset 0x890, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphLaserBeamEffect; // offset 0x970, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphLaserPreviewEffect; // offset 0xA50, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberLaserChargingEffect; // offset 0xB30, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphLaserChargingEffect; // offset 0xC10, size 0xE0, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0xCF0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaserFireSound; // offset 0xD00, size 0x10, align 8
    CSoundEventName m_strLaserHitSound; // offset 0xD10, size 0x10, align 8
    float32 m_flLaserDPSToPlayers; // offset 0xD20, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLaserDPSMaxHealth; // offset 0xD24, size 0x4, align 4
    float32 m_flLaserDPSToNPCs; // offset 0xD28, size 0x4, align 4
    float32 m_flLaserDPSTickRate; // offset 0xD2C, size 0x4, align 4
};
