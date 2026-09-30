#pragma once

class CNavLinkMovementVariantDefinition  // sizeof 0x110, align 0x8 (server) {MGetKV3ClassDefaults}
{
public:
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmGraphDefinition > > m_sExternalGraphName; // offset 0x0, size 0xE0, align 8 | MPropertyDescription
    BodySectionMutex_t m_eBodySectionMutex; // offset 0xE0, size 0x4, align 4 | MPropertyDescription
    CBitVecEnum< NavLinkMovementFlags_t > m_flags; // offset 0xE4, size 0x4, align 4
    float32 m_flMinimalPathLengthForMovingExit; // offset 0xE8, size 0x4, align 4 | MPropertyDescription
    float32 m_flSnapDestinationToPathGoalThreshold; // offset 0xEC, size 0x4, align 4 | MPropertyDescription
    SharedMovementGait_t m_ePreferredMovementGait; // offset 0xF0, size 0x1, align 1
    char _pad_00F1[0x3]; // offset 0xF1
    StanceType_t m_ePreferredStance; // offset 0xF4, size 0x4, align 4
    float32 m_flPreferredMovementGaitDistance; // offset 0xF8, size 0x4, align 4
    CNavLinkApproachConditions m_approachConditionsFromIdle; // offset 0xFC, size 0x8, align 4
    CNavLinkApproachConditions m_approachConditionsFromMovement; // offset 0x104, size 0x8, align 4
    char _pad_010C[0x4]; // offset 0x10C
};
