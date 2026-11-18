#pragma once

struct AutoTagVDataCondition_t  // sizeof 0x138, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVDataResource > > m_SourceFile; // offset 0x0, size 0xE0, align 8 | MPropertyDescription
    CKV3MemberNameWithStorage m_AssetKey; // offset 0xE0, size 0x38, align 8 | MPropertyDescription
    CUtlVector< CUtlString > m_AlternateAssetKeys; // offset 0x118, size 0x18, align 8 | MPropertyDescription MPropertyAutoExpandSelf
    CUtlString m_Expression; // offset 0x130, size 0x8, align 8 | MPropertyDescription
};
