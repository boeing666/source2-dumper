#pragma once

class CEconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0xD20*/  // sizeof 0x1190, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD38]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xD38, size 0x438, align 255
    uint32 m_OriginalOwnerXuidLow; // offset 0x1170, size 0x4, align 4
    uint32 m_OriginalOwnerXuidHigh; // offset 0x1174, size 0x4, align 4
    int32 m_nFallbackPaintKit; // offset 0x1178, size 0x4, align 4
    int32 m_nFallbackSeed; // offset 0x117C, size 0x4, align 4
    float32 m_flFallbackWear; // offset 0x1180, size 0x4, align 4
    int32 m_nFallbackStatTrak; // offset 0x1184, size 0x4, align 4
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0x1188, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0x118C, size 0x4, align 4
};
