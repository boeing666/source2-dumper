#pragma once

struct ModelAnimGraph2Ref_t  // sizeof 0x10, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlString m_sIdentifier; // offset 0x0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraph; // offset 0x8, size 0x8, align 8
};
