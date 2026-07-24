#pragma once

class CModelConfigElement_AttachedModel : public CModelConfigElement /*0x0*/  // sizeof 0xE8, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlString m_InstanceName; // offset 0x48, size 0x8, align 8
    CUtlString m_EntityClass; // offset 0x50, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x58, size 0x8, align 8
    Vector m_vOffset; // offset 0x60, size 0xC, align 4
    QAngle m_aAngOffset; // offset 0x6C, size 0xC, align 4
    CUtlString m_AttachmentName; // offset 0x78, size 0x8, align 8
    CUtlString m_LocalAttachmentOffsetName; // offset 0x80, size 0x8, align 8
    ModelConfigAttachmentType_t m_AttachmentType; // offset 0x88, size 0x4, align 4
    bool m_bBoneMergeFlex; // offset 0x8C, size 0x1, align 1
    bool m_bUserSpecifiedColor; // offset 0x8D, size 0x1, align 1
    bool m_bUserSpecifiedMaterialGroup; // offset 0x8E, size 0x1, align 1
    char _pad_008F[0x1]; // offset 0x8F
    CUtlString m_BodygroupOnOtherModels; // offset 0x90, size 0x8, align 8
    CUtlString m_MaterialGroupOnOtherModels; // offset 0x98, size 0x8, align 8
    char _pad_00A0[0x48]; // offset 0xA0
};
