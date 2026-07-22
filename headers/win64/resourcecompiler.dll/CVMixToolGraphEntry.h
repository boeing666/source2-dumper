#pragma once

class CVMixToolGraphEntry  // sizeof 0x98, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    CVMixToolGraph m_graph; // offset 0x0, size 0x48, align 8
    CGraphEditorState m_editorState; // offset 0x48, size 0x28, align 4
    CGraphPreviewList m_graphPreview; // offset 0x70, size 0x28, align 8
};
