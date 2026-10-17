#pragma once

class C_INIT_RandomModelSequence : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x3E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    char[256] m_ActivityName; // offset 0x1DC, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char[256] m_SequenceName; // offset 0x2DC, size 0x100, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_03DC[0x4]; // offset 0x3DC
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x3E0, size 0x8, align 8 | MPropertyFriendlyName
};
