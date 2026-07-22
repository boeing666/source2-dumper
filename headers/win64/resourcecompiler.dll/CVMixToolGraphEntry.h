#pragma once

class CVMixToolGraphEntry : public CVMixToolGraph /*0x0*/  // sizeof 0x98, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CGraphPreviewList m_graphPreview; // offset 0x48, size 0x28, align 8
    CGraphEditorState m_editorState; // offset 0x70, size 0x28, align 4 | MKV3TransferName
};
