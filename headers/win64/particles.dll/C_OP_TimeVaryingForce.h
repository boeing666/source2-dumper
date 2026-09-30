#pragma once

class C_OP_TimeVaryingForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    float32 m_flStartLerpTime; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_StartingForce; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flEndLerpTime; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_EndingForce; // offset 0x204, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
};
