// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/view_manager/public/cpp/view_tree_delegate.h"

namespace mojo {

void ViewTreeDelegate::OnUnembed() {}

void ViewTreeDelegate::OnEmbedForDescendant(
    View* view,
    mojo::URLRequestPtr request,
    mojo::ViewTreeClientPtr* client) {
}

}  // namespace mojo