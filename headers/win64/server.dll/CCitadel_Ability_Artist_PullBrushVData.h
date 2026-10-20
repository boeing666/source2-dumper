#pragma once

class CCitadel_Ability_Artist_PullBrushVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1448, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    EAbilitySlots_t m_eLeaderAbilitySlot; // offset 0x1070, size 0x2, align 2 | MPropertyStartGroup
    bool m_bLockInitialCastPosition; // offset 0x1072, size 0x1, align 1
    char _pad_1073[0x1]; // offset 0x1073
    float32 m_flSpacingBetweenBlockers; // offset 0x1074, size 0x4, align 4
    float32 m_flAdditionalTraceDistance; // offset 0x1078, size 0x4, align 4
    float32 m_flTraceSurfaceOffset; // offset 0x107C, size 0x4, align 4
    float32 m_flDragSpringStrength; // offset 0x1080, size 0x4, align 4
    float32 m_flDragDamp; // offset 0x1084, size 0x4, align 4
    float32 m_flDrawingLingerTime; // offset 0x1088, size 0x4, align 4
    bool m_bShowDesatVolume; // offset 0x108C, size 0x1, align 1
    char _pad_108D[0x3]; // offset 0x108D
    float32 m_flBlockerExtent; // offset 0x1090, size 0x4, align 4
    char _pad_1094[0x4]; // offset 0x1094
    CEmbeddedSubclass< CCitadelModifier > m_CollisionModifier; // offset 0x1098, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle; // offset 0x10A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DragParticle; // offset 0x1188, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StrokeParticle; // offset 0x1268, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // offset 0x1348, size 0xE0, align 8
    CSoundEventName m_strStrokeSound; // offset 0x1428, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPaintingLoopSound; // offset 0x1438, size 0x10, align 8
};
