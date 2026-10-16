#pragma once

class CCitadel_Ability_Artist_PullBrushVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    EAbilitySlots_t m_eLeaderAbilitySlot; // offset 0x13E8, size 0x2, align 2 | MPropertyStartGroup
    bool m_bLockInitialCastPosition; // offset 0x13EA, size 0x1, align 1
    char _pad_13EB[0x1]; // offset 0x13EB
    float32 m_flSpacingBetweenBlockers; // offset 0x13EC, size 0x4, align 4
    float32 m_flAdditionalTraceDistance; // offset 0x13F0, size 0x4, align 4
    float32 m_flTraceSurfaceOffset; // offset 0x13F4, size 0x4, align 4
    float32 m_flDragSpringStrength; // offset 0x13F8, size 0x4, align 4
    float32 m_flDragDamp; // offset 0x13FC, size 0x4, align 4
    float32 m_flDrawingLingerTime; // offset 0x1400, size 0x4, align 4
    bool m_bShowDesatVolume; // offset 0x1404, size 0x1, align 1
    char _pad_1405[0x3]; // offset 0x1405
    CEmbeddedSubclass< CCitadelModifier > m_CollisionModifier; // offset 0x1408, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DragParticle; // offset 0x14F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StrokeParticle; // offset 0x15D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // offset 0x16B8, size 0xE0, align 8
    CSoundEventName m_strStrokeSound; // offset 0x1798, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPaintingLoopSound; // offset 0x17A8, size 0x10, align 8
};
