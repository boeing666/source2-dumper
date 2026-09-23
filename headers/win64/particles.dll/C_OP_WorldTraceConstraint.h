#pragma once

class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nCP; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecCpOffset; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleCollisionMode_t m_nCollisionMode; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleCollisionMode_t m_nCollisionModeMin; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x1F8, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x1FC, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bWorldOnly; // offset 0x27C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bBrushOnly; // offset 0x27D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIncludeWater; // offset 0x27E, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_027F[0x1]; // offset 0x27F
    int32 m_nIgnoreCP; // offset 0x280, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flCpMovementTolerance; // offset 0x284, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flRetestRate; // offset 0x288, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flTraceTolerance; // offset 0x28C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flCollisionConfirmationSpeed; // offset 0x290, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_nMaxTracesPerFrame; // offset 0x294, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRadiusScale; // offset 0x298, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CPerParticleFloatInput m_flBounceAmount; // offset 0x410, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flSlideAmount; // offset 0x588, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRandomDirScale; // offset 0x700, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bDecayBounce; // offset 0x878, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bKillonContact; // offset 0x879, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_087A[0x2]; // offset 0x87A
    float32 m_flMinSpeed; // offset 0x87C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bKillonContactBounce; // offset 0x880, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bSetNormal; // offset 0x881, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0882[0x2]; // offset 0x882
    ParticleAttributeIndex_t m_nStickOnCollisionField; // offset 0x884, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CPerParticleFloatInput m_flStopSpeed; // offset 0x888, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nEntityStickDataField; // offset 0xA00, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nEntityStickNormalField; // offset 0xA04, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
