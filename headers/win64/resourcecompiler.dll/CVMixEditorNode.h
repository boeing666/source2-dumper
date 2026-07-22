#pragma once

class CVMixEditorNode  // sizeof 0x38, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MKV3TransferName
    CUtlString m_friendlyName; // offset 0x8, size 0x8, align 8 | MKV3TransferName
    CUtlString m_type; // offset 0x10, size 0x8, align 8 | MKV3TransferName
    Vector2D m_vPos; // offset 0x18, size 0x8, align 4 | MKV3TransferName
    Vector2D m_vSize; // offset 0x20, size 0x8, align 4 | MKV3TransferName
    KeyValues3 m_properties; // offset 0x28, size 0x10, align 8 | MKV3TransferName
};
