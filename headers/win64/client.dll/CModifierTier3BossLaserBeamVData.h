#pragma once

class CModifierTier3BossLaserBeamVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xCF8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifierAura > m_GroundAuraModifier; // offset 0x760, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAuraDropTickRate; // offset 0x770, size 0x4, align 4
    char _pad_0774[0x4]; // offset 0x774
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberLaserBeamEffect; // offset 0x778, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberLaserPreviewEffect; // offset 0x858, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphLaserBeamEffect; // offset 0x938, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphLaserPreviewEffect; // offset 0xA18, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberLaserChargingEffect; // offset 0xAF8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphLaserChargingEffect; // offset 0xBD8, size 0xE0, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0xCB8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaserFireSound; // offset 0xCC8, size 0x10, align 8
    CSoundEventName m_strLaserHitSound; // offset 0xCD8, size 0x10, align 8
    float32 m_flLaserDPSToPlayers; // offset 0xCE8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLaserDPSMaxHealth; // offset 0xCEC, size 0x4, align 4
    float32 m_flLaserDPSToNPCs; // offset 0xCF0, size 0x4, align 4
    float32 m_flLaserDPSTickRate; // offset 0xCF4, size 0x4, align 4
};
