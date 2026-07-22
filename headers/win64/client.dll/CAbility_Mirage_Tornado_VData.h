#pragma once

class CAbility_Mirage_Tornado_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AA0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TornadoCastParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x18F8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_WhirlwindEvasionModifier; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TornadoAura; // offset 0x19E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // offset 0x19F8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTravelingInTornado; // offset 0x1A08, size 0x88, align 8 | MPropertyStartGroup
    CSoundEventName m_PurgeSound; // offset 0x1A90, size 0x10, align 8 | MPropertyStartGroup
};
