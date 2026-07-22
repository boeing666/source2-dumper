#pragma once

class C_INIT_InheritVelocity : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flVelocityScale; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
};
