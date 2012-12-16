#include <v8.h>
#include <node.h>
#include <node_buffer.h>

using namespace v8;

extern "C" {
#include <DG/dg.h>
}
#include <GLES2/gl2.h>
#include "object.h"
#include "renderer.h"

static void Init(Handle<Object> target)
{
    if (!dgValidVersion(1, 0)) {
        ThrowException(String::NewSymbol("dg-1.0 unavailable"));
    }
    webgl::GLObject::Init(target);
    webgl::Renderer::Init(target);
}
NODE_MODULE(webgl, Init);
