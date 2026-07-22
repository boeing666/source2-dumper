#pragma once

class CNavLinkMovementVData  // sizeof 0x118, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MVDataRoot MVDataNodeType MVDataOverlayType}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName; // offset 0x8, size 0xE0, align 8 | MPropertyDescription MPropertyProvidesEditContextString
    CUtlVector< CNavLinkAnimgraphVar > m_vecAnimgraphVars; // offset 0xE8, size 0x18, align 8 | MPropertyFriendlyName MPropertyDescription MPropertyAutoExpandSelf
    CUtlVector< CNavLinkMovementVariantDefinition > m_vecVariants; // offset 0x100, size 0x18, align 8
};
