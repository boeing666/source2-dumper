#pragma once

class CInventoryImageData  // sizeof 0xF8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataOutlinerDetailExpr MVDataOverlayType MVDataPreviewWidget MVDataHideNodeClass MVDataOutlinerLeafNameFn MVDataOutlinerLeafColorFn MVDataOutlinerLeafDetailFn MVDataVirtualNodeFactoryFn MVDataPreLoadFixupFn MVDataPostSaveFixupFn}
{
public:
    InventoryNodeType_t m_nNodeType; // offset 0x0, size 0x4, align 4 | MPropertySuppressField
    char _pad_0004[0x4]; // offset 0x4
    CUtlString name; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName MPropertyReadOnly MPropertyReadonlyExpr MPropertySuppressExpr
    inv_image_data_t inventory_image_data; // offset 0x10, size 0xE8, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
};
