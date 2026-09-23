#pragma once

class C_INIT_CreateWithinCone : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1E0, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInnerAngle; // offset 0x240, size 0x170, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flOuterAngle; // offset 0x3B0, size 0x170, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flSpeed; // offset 0x520, size 0x170, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flOffset; // offset 0x690, size 0x170, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bCollapseOffset; // offset 0x800, size 0x1, align 1 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_0801[0x3]; // offset 0x801
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0x804, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_080C[0x4]; // offset 0x80C
};
