#pragma once

class C_BodyComponentBaseAnimating : public CBodyComponentSkeletonInstance /*0x0*/  // sizeof 0xB00, align 0xFF [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x550]; // offset 0x0
    C_BaseAnimatingController m_animationController; // offset 0x550, size 0x5A8, align 255
    char _pad_0AF8[0x8]; // offset 0xAF8
};
