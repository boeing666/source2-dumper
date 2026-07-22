#pragma once

class CEconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0xC40*/  // sizeof 0xF70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC58]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xC58, size 0x2F8, align 255
    uint32 m_OriginalOwnerXuidLow; // offset 0xF50, size 0x4, align 4
    uint32 m_OriginalOwnerXuidHigh; // offset 0xF54, size 0x4, align 4
    int32 m_nFallbackPaintKit; // offset 0xF58, size 0x4, align 4
    int32 m_nFallbackSeed; // offset 0xF5C, size 0x4, align 4
    float32 m_flFallbackWear; // offset 0xF60, size 0x4, align 4
    int32 m_nFallbackStatTrak; // offset 0xF64, size 0x4, align 4
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0xF68, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0xF6C, size 0x4, align 4
};
