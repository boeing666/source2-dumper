#pragma once

class CCitadel_Ability_Doorman_Doorway_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CSoundEventName m_DoorOpenStartSound; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_DoorOpenEndSound; // offset 0x1090, size 0x10, align 8
    CSoundEventName m_DoorPlaceSound; // offset 0x10A0, size 0x10, align 8
    CSoundEventName m_DoorPlacementClearedSound; // offset 0x10B0, size 0x10, align 8
    CSoundEventName m_DoorStartCastSound; // offset 0x10C0, size 0x10, align 8
    CSoundEventName m_DoorEndCastSound; // offset 0x10D0, size 0x10, align 8
    CSoundEventName m_DoorExpireSound; // offset 0x10E0, size 0x10, align 8
    CSoundEventName m_DoorLoopSound; // offset 0x10F0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1100, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PendingDoorParticle; // offset 0x11E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PlaceDoorParticle; // offset 0x12C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DoorDurationParticle; // offset 0x13A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DoorDestructionParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hDoorModel; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hPortalModel; // offset 0x1640, size 0xE0, align 8
    CPanoramaImageName m_strSingleDoorAbilityImage; // offset 0x1720, size 0x10, align 8 | MPropertyStartGroup
    Color m_ColorStart; // offset 0x1730, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    Color m_ColorEnd; // offset 0x1734, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    CEmbeddedSubclass< CCitadelModifier > m_DoorwayTimerModifier; // offset 0x1738, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PortalBarrierModifier; // offset 0x1748, size 0x10, align 8
    float32 m_flPlacementWallTestDistance; // offset 0x1758, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPlacementWallTestExtentsSolidScale; // offset 0x175C, size 0x4, align 4
    float32 m_flPlacementWallTestExtentsWallScale; // offset 0x1760, size 0x4, align 4
    float32 m_flPlacementWallTestSphereRadius; // offset 0x1764, size 0x4, align 4
    Vector m_vPlacementOffset; // offset 0x1768, size 0xC, align 4
    float32 m_flPlacementCooldown; // offset 0x1774, size 0x4, align 4
    float32 m_flPlacementRangeHintDuration; // offset 0x1778, size 0x4, align 4
    float32 m_flPlacementSphereMaxDesat; // offset 0x177C, size 0x4, align 4
    Color m_colorPlacementSphereSat; // offset 0x1780, size 0x4, align 4
    Color m_colorPlacementSphereDesat; // offset 0x1784, size 0x4, align 4
    Color m_colorPlacementSphereOutline; // offset 0x1788, size 0x4, align 4
    char _pad_178C[0x4]; // offset 0x178C
    CPiecewiseCurve m_curvePlacementFail; // offset 0x1790, size 0x40, align 8
};
