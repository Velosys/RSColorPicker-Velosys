Pod::Spec.new do |s|
<<<<<<< HEAD
  s.name         = "RSColorPicker"
  s.version      = "0.9.0"
=======
  s.name         = "RSColorPicker-Velosys"
  s.version      = "0.8.0"
>>>>>>> Changed pod to reference this repo
  s.summary      = "iPhone color picker view with brightness control, opacity control, and delegation support."
  s.description  = <<-DESC
                   iPhone color picker view with brightness control, opacity control, and delegation support.
                   DESC
  s.homepage     = "https://github.com/RSully/RSColorPicker"
  s.screenshots  = "https://raw.github.com/RSully/RSColorPicker/v0.9.0/Example01.png", "https://raw.github.com/RSully/RSColorPicker/v0.9.0/Example02.png", "https://raw.github.com/RSully/RSColorPicker/v0.9.0/Example03.png", "https://raw.github.com/RSully/RSColorPicker/v0.9.0/Example04.png", "https://raw.github.com/RSully/RSColorPicker/v0.9.0/Example05.png"
  s.license      = { :type => 'BSD', :file => "LICENSE.md" }
  s.author       = { "Ryan" => "rsul.dev@me.com" }
  s.source       = { :git => "https://github.com/Velosys/RSColorPicker-Velosys.git", :tag => "v0.8.0" }
  s.platform     = :ios, '5.0'
  s.source_files = 'RSColorPicker/ColorPickerClasses/**/*.{h,m}'
  s.frameworks   = 'QuartzCore', 'CoreGraphics', 'UIKit', 'Accelerate'
  s.requires_arc = true

  s.public_header_files = "RSColorPicker/ColorPickerClasses/RSColorPickerView.h"
end
