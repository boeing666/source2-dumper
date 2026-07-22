#pragma once

class CCitadel_Ability_FissureWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyWallParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyWallParticle; // offset 0x18F8, size 0xE0, align 8
    CSoundEventName m_WallTravelSoundLoop; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallRemoveSound; // offset 0x19E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_WallModifier; // offset 0x19F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1A08, size 0x10, align 8
    float32 m_flWallPreviewDropdownRate; // offset 0x1A18, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flWallStepHeight; // offset 0x1A1C, size 0x4, align 4
    float32 m_flWallTraceRadius; // offset 0x1A20, size 0x4, align 4
    char _pad_1A24[0x4]; // offset 0x1A24
};
